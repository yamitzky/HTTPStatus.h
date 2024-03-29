//
// HTTPStatus.h
//
// Public Domain Dedication
// This code is available under the CC0 1.0 Universal (CC0 1.0)
//

typedef enum {
  kHTTPStatusContinue = 100,
  kHTTPStatusSwitchingProtocols = 101,
  kHTTPStatusProcessing = 102,
  kHTTPStatusOK = 200,
  kHTTPStatusCreated = 201,
  kHTTPStatusAccepted = 202,
  kHTTPStatusNonAuthoritativeInformation = 203,
  kHTTPStatusNoContent = 204,
  kHTTPStatusResetContent = 205,
  kHTTPStatusPartialContent = 206,
  kHTTPStatusMultiStatus = 207,
  kHTTPStatusAlreadyReported = 208,
  kHTTPStatusIMUsed = 226,
  kHTTPStatusAuthenticationSuccessful = 230,
  kHTTPStatusMultipleChoices = 300,
  kHTTPStatusMovedPermanently = 301,
  kHTTPStatusFound = 302,
  kHTTPStatusSeeOther = 303,
  kHTTPStatusNotModified = 304,
  kHTTPStatusUseProxy = 305,
  kHTTPStatusSwitchProxy = 306,
  kHTTPStatusTemporaryRedirect = 307,
  kHTTPStatusPermanentRedirect = 308,
  kHTTPStatusBadRequest = 400,
  kHTTPStatusUnauthorized = 401,
  kHTTPStatusPaymentRequired = 402,
  kHTTPStatusForbidden = 403,
  kHTTPStatusNotFound = 404,
  kHTTPStatusMethodNotAllowed = 405,
  kHTTPStatusNotAcceptable = 406,
  kHTTPStatusProxyAuthenticationRequired = 407,
  kHTTPStatusRequestTimeout = 408,
  kHTTPStatusConflict = 409,
  kHTTPStatusGone = 410,
  kHTTPStatusLengthRequired = 411,
  kHTTPStatusPreconditionFailed = 412,
  kHTTPStatusRequestEntityTooLarge = 413,
  kHTTPStatusRequestURITooLong = 414,
  kHTTPStatusUnsupportedMediaType = 415,
  kHTTPStatusRequestedRangeNotSatisfiable = 416,
  kHTTPStatusExpectationFailed = 417,
  kHTTPStatusImATeapot = 418,
  kHTTPStatusEnhanceYourCalm = 420,
  kHTTPStatusUnprocessableEntity = 422,
  kHTTPStatusLocked = 423,
  kHTTPStatusFailedDependency = 424,
  kHTTPStatusUnorderedCollection = 425,
  kHTTPStatusUpgradeRequired = 426,
  kHTTPStatusPreconditionRequired = 428,
  kHTTPStatusTooManyRequests = 429,
  kHTTPStatusRequestHeaderFieldsTooLarge = 431,
  kHTTPStatusNoResponse = 444,
  kHTTPStatusRetryWith = 449,
  kHTTPStatusBlockedbyWindowsParentalControls = 450,
  kHTTPStatusUnavailableForLegalReasons = 451,
  kHTTPStatusRedirect = 451,
  kHTTPStatusRequestHeaderTooLarge = 494,
  kHTTPStatusCertError = 495,
  kHTTPStatusNoCert = 496,
  kHTTPStatusHTTPtoHTTPS = 497,
  kHTTPStatusClientClosedRequest = 499,
  kHTTPStatusInternalServerError = 500,
  kHTTPStatusNotImplemented = 501,
  kHTTPStatusBadGateway = 502,
  kHTTPStatusServiceUnavailable = 503,
  kHTTPStatusGatewayTimeout = 504,
  kHTTPStatusHTTPVersionNotSupported = 505,
  kHTTPStatusVariantAlsoNegotiates = 506,
  kHTTPStatusInsufficientStorage = 507,
  kHTTPStatusLoopDetected = 508,
  kHTTPStatusBandwidthLimitExceeded = 509,
  kHTTPStatusNotExtended = 510,
  kHTTPStatusNetworkAuthenticationRequired = 511,
  kHTTPStatusAccessDenied = 531,
  kHTTPStatusNetworkreadtimeouterror = 598,
  kHTTPStatusNetworkconnecttimeouterror = 599
} HTTPStatus;
