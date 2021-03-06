//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QYMCouponOrderData : NSObject
{
    NSString *_count;
    NSString *_status;
    NSString *_price;
    NSString *_totalPrice;
    NSString *_totalPriceString;
    NSString *_poster;
    NSString *_orderId;
    NSString *_time;
    NSString *_serverDate;
    NSString *_isCouponOrder;
    NSString *_title;
    NSString *_usingPeriod;
    NSString *_statusTips;
    NSString *_promotionStatus;
    NSString *_isUsable;
    NSString *_pageUrl;
    NSString *_isRegetable;
    NSString *_phone;
}

@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString *isRegetable; // @synthesize isRegetable=_isRegetable;
@property(copy, nonatomic) NSString *pageUrl; // @synthesize pageUrl=_pageUrl;
@property(copy, nonatomic) NSString *isUsable; // @synthesize isUsable=_isUsable;
@property(copy, nonatomic) NSString *promotionStatus; // @synthesize promotionStatus=_promotionStatus;
@property(copy, nonatomic) NSString *statusTips; // @synthesize statusTips=_statusTips;
@property(copy, nonatomic) NSString *usingPeriod; // @synthesize usingPeriod=_usingPeriod;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *isCouponOrder; // @synthesize isCouponOrder=_isCouponOrder;
@property(copy, nonatomic) NSString *serverDate; // @synthesize serverDate=_serverDate;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *poster; // @synthesize poster=_poster;
@property(copy, nonatomic) NSString *totalPriceString; // @synthesize totalPriceString=_totalPriceString;
@property(copy, nonatomic) NSString *totalPrice; // @synthesize totalPrice=_totalPrice;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *count; // @synthesize count=_count;
- (void)buildWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;

@end

