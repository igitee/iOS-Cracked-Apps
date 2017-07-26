//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AliHotSpotQuestionViewProtocol.h"

@class AliDetailHotSpotAnswerService, AliHotSpotQuestionModel, AliHotSpotQuestionView, NSString;

@interface AliHotSpotQuestionController : UIViewController <AliHotSpotQuestionViewProtocol>
{
    _Bool _hasStockResponse204Error;
    NSString *_eventToken;
    NSString *_answerApiUrl;
    NSString *_questionApiUrl;
    AliHotSpotQuestionModel *_questionModel;
    AliHotSpotQuestionView *_seckillView;
    AliDetailHotSpotAnswerService *_answerServeice;
}

@property(retain, nonatomic) AliDetailHotSpotAnswerService *answerServeice; // @synthesize answerServeice=_answerServeice;
@property(retain, nonatomic) AliHotSpotQuestionView *seckillView; // @synthesize seckillView=_seckillView;
@property(retain, nonatomic) AliHotSpotQuestionModel *questionModel; // @synthesize questionModel=_questionModel;
@property(retain, nonatomic) NSString *questionApiUrl; // @synthesize questionApiUrl=_questionApiUrl;
@property(retain, nonatomic) NSString *answerApiUrl; // @synthesize answerApiUrl=_answerApiUrl;
@property(retain, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
- (void).cxx_destruct;
- (void)questionResponseBuyNow;
- (void)buyNowWithParams:(id)arg1;
- (void)buyNow;
- (void)requestStock;
- (void)answerFinished;
- (void)autoAnswerFinished;
- (void)reLoadView:(id)arg1;
- (id)initWithQuestionModel:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
