//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYUBaseBlock.h"

@class QYUImageControl, QYUTextSimple;

@interface QYUBlock113 : QYUBaseBlock
{
    QYUTextSimple *_bgImageControl;
    QYUTextSimple *_priceTextControl;
    QYUTextSimple *_couponsTypeControl;
    QYUTextSimple *_couponsNameControl;
    QYUTextSimple *_couponsDescriptionControl;
    QYUTextSimple *_dateControl;
    QYUTextSimple *_immediateUseControl;
    QYUImageControl *_expiredTagImage;
}

+ (double)getHeightByData:(id)arg1 rowWidth:(double)arg2;
+ (void)load;
@property(retain, nonatomic) QYUImageControl *expiredTagImage; // @synthesize expiredTagImage=_expiredTagImage;
@property(retain, nonatomic) QYUTextSimple *immediateUseControl; // @synthesize immediateUseControl=_immediateUseControl;
@property(retain, nonatomic) QYUTextSimple *dateControl; // @synthesize dateControl=_dateControl;
@property(retain, nonatomic) QYUTextSimple *couponsDescriptionControl; // @synthesize couponsDescriptionControl=_couponsDescriptionControl;
@property(retain, nonatomic) QYUTextSimple *couponsNameControl; // @synthesize couponsNameControl=_couponsNameControl;
@property(retain, nonatomic) QYUTextSimple *couponsTypeControl; // @synthesize couponsTypeControl=_couponsTypeControl;
@property(retain, nonatomic) QYUTextSimple *priceTextControl; // @synthesize priceTextControl=_priceTextControl;
@property(retain, nonatomic) QYUTextSimple *bgImageControl; // @synthesize bgImageControl=_bgImageControl;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)applyData;
- (void)reCreatePriceControl;
- (void)initSubControls;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2;

@end

