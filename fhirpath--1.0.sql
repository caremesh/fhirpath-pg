-- complain if script is sourced in psql, rather than via CREATE EXTENSION
\echo Use "CREATE EXTENSION fhirpath" to load this file. \quit

CREATE TYPE fhirpath;

CREATE FUNCTION fhirpath_in(cstring)
	RETURNS fhirpath
	AS 'MODULE_PATHNAME'
	LANGUAGE C STRICT IMMUTABLE;

CREATE FUNCTION fhirpath_out(fhirpath)
	RETURNS cstring
	AS 'MODULE_PATHNAME'
	LANGUAGE C STRICT IMMUTABLE;

CREATE TYPE fhirpath (
	INTERNALLENGTH = -1,
	INPUT = fhirpath_in,
	OUTPUT = fhirpath_out,
	STORAGE = extended
);

CREATE OR REPLACE FUNCTION fhirpath_extract(jsonb, fhirpath)
RETURNS jsonb
AS 'MODULE_PATHNAME'
LANGUAGE C STRICT IMMUTABLE;


CREATE OR REPLACE FUNCTION fhirpath_as_string(jsonb, fhirpath, text)
RETURNS text
AS 'MODULE_PATHNAME'
LANGUAGE C STRICT IMMUTABLE;

CREATE OR REPLACE FUNCTION fhirpath_as_token(jsonb, fhirpath, text)
RETURNS text[]
AS 'MODULE_PATHNAME'
LANGUAGE C STRICT IMMUTABLE;

CREATE OR REPLACE FUNCTION fhirpath_as_reference(jsonb, fhirpath, text)
RETURNS text[]
AS 'MODULE_PATHNAME'
LANGUAGE C STRICT IMMUTABLE;

CREATE OR REPLACE FUNCTION fhirpath_as_number(jsonb, fhirpath, text, text)
RETURNS numeric
AS 'MODULE_PATHNAME'
LANGUAGE C STRICT IMMUTABLE;

CREATE OR REPLACE FUNCTION fhirpath_date_bound(text, text)
RETURNS timestamptz
AS 'MODULE_PATHNAME'
LANGUAGE C STRICT IMMUTABLE;

CREATE OR REPLACE FUNCTION fhirpath_as_date(jsonb, fhirpath, text, text)
RETURNS timestamptz
AS 'MODULE_PATHNAME'
LANGUAGE C STRICT IMMUTABLE;

CREATE OR REPLACE FUNCTION fhirpath_sort_as_text(jsonb, fhirpath, text)
RETURNS text
AS 'MODULE_PATHNAME'
LANGUAGE C STRICT IMMUTABLE;

CREATE OR REPLACE FUNCTION fhirpath_exists(jsonb, fhirpath, text)
RETURNS boolean
AS 'MODULE_PATHNAME'
LANGUAGE C STRICT IMMUTABLE;
