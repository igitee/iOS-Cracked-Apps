//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface BWSchemeEngine : NSObject
{
    NSMutableArray *_shcemeHanlders;
    NSMutableArray *_waitingConnections;
}

+ (id)shareEngine;
- (void).cxx_destruct;
- (_Bool)handleRequest:(id)arg1 WithParameters:(id)arg2 sourceApp:(id)arg3;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)cacheConnectionForWaitingResponse:(id)arg1;
- (void)registerApp:(id)arg1 scheme:(id)arg2;
- (void)registerHandler:(id)arg1;
- (id)init;

@end

