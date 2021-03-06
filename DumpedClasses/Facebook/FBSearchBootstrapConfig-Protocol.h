//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBGraphQLDownloadRequest, FBSearchBootstrapFileManager, FBUserSession, NSArray, NSData, NSString;
@protocol FBSearchSuggestionGeneratorProtocol;

@protocol FBSearchBootstrapConfig <NSObject>
+ (NSData *)serializeBootstrapData:(NSArray *)arg1;
+ (FBGraphQLDownloadRequest *)downloadRequestWithSession:(FBUserSession *)arg1;
+ (NSArray *)resultsFromRequest:(FBGraphQLDownloadRequest *)arg1 response:(id)arg2 parseError:(id *)arg3;
+ (id <FBSearchSuggestionGeneratorProtocol>)suggestionGeneratorWithBootstrapFileManager:(FBSearchBootstrapFileManager *)arg1 session:(FBUserSession *)arg2;
+ (NSString *)fileName;
+ (unsigned long long)maxResultCount;
+ (double)refreshIntervalNonWiFiForSession:(FBUserSession *)arg1;
+ (double)refreshIntervalWiFiForSession:(FBUserSession *)arg1;
+ (NSString *)lastStoreFullRefreshDateKeyString;
@end

