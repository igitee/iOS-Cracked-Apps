//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCGroupChatHaderViewDataSourceProtocol.h"

@class NSMutableDictionary, NSString, YHMuticastDelegate<MCGroupChatHaderViewDataSourceDelegate>;

@interface MCGroupChatHeaderDataSource : NSObject <MCGroupChatHaderViewDataSourceProtocol>
{
    _Bool _ctr;
    YHMuticastDelegate<MCGroupChatHaderViewDataSourceDelegate> *_delegates;
    NSMutableDictionary *_templateDict;
}

@property _Bool ctr; // @synthesize ctr=_ctr;
@property(retain, nonatomic) NSMutableDictionary *templateDict; // @synthesize templateDict=_templateDict;
@property(retain, nonatomic) YHMuticastDelegate<MCGroupChatHaderViewDataSourceDelegate> *delegates; // @synthesize delegates=_delegates;
- (void).cxx_destruct;
- (void)saveTemplate:(id)arg1 key:(id)arg2;
- (id)getTemplateKey:(id)arg1;
- (id)paserTemplate:(id)arg1;
- (id)loadTemplateByKey:(id)arg1;
- (void)reset;
- (void)start;
- (id)getProtocol;
- (id)getBizKey;
- (void)addDelegate:(id)arg1;
- (void)getTemplateFromNetworkByKey:(id)arg1;
- (void)getTemplateByCCode:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
