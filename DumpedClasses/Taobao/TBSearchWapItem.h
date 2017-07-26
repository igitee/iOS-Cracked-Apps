//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSearchWapItemBase.h"

@class NSArray, NSDictionary, NSString, TBSearchAuctionIconHelper;

@interface TBSearchWapItem : TBSearchWapItemBase
{
    _Bool _didClicked;
    NSString *_title;
    NSString *_pic_path;
    NSString *_uprightImg;
    NSString *_price;
    NSString *_priceWithRate;
    NSString *_item_id;
    NSString *_location;
    NSString *_sold;
    NSString *_userType;
    NSString *_clickUrl;
    NSString *_fastPostFee;
    NSString *_rn;
    NSString *_pricePerUnit;
    NSString *_coinInfo;
    NSString *_mobileDiscount;
    NSString *_banditScore;
    NSString *_pre_title;
    NSString *_pre_title_color;
    NSString *_recommendReason;
    NSString *_similarCount;
    NSString *_sameCount;
    NSString *_similarURL;
    NSString *_uniqpid;
    NSString *_spuId;
    NSString *_iconList;
    NSArray *_icons;
    NSDictionary *_iconComponentResult;
    NSString *_o2oShopId;
    NSString *_newDsr;
    NSString *_ratesum;
    NSString *_shopName;
    NSString *_nick;
    NSString *_userId;
    NSString *_realSales;
    NSString *_assess;
    NSString *_recommendGuy;
    NSString *_collect;
    NSString *_recommendLabel;
    NSString *_from;
    NSString *_daySold;
    NSString *_inStock;
    NSDictionary *_stockPromotion;
    NSDictionary *_priceShow;
    NSString *_shopAddress;
    NSArray *_summaryTips;
    NSString *_skuId;
    NSString *_inShopCoupon;
    NSString *_clickTrace;
    NSString *_auctionTag;
    NSDictionary *_shopInfo;
    NSString *_pic_path_saved;
    NSString *_uprightImg_saved;
    TBSearchAuctionIconHelper *_iconHelper;
}

@property(retain, nonatomic) TBSearchAuctionIconHelper *iconHelper; // @synthesize iconHelper=_iconHelper;
@property(retain, nonatomic) NSString *uprightImg_saved; // @synthesize uprightImg_saved=_uprightImg_saved;
@property(retain, nonatomic) NSString *pic_path_saved; // @synthesize pic_path_saved=_pic_path_saved;
@property(retain, nonatomic) NSDictionary *shopInfo; // @synthesize shopInfo=_shopInfo;
@property(retain, nonatomic) NSString *auctionTag; // @synthesize auctionTag=_auctionTag;
@property(retain, nonatomic) NSString *clickTrace; // @synthesize clickTrace=_clickTrace;
@property(retain, nonatomic) NSString *inShopCoupon; // @synthesize inShopCoupon=_inShopCoupon;
@property(retain, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(retain, nonatomic) NSArray *summaryTips; // @synthesize summaryTips=_summaryTips;
@property(retain, nonatomic) NSString *shopAddress; // @synthesize shopAddress=_shopAddress;
@property(retain, nonatomic) NSDictionary *priceShow; // @synthesize priceShow=_priceShow;
@property(retain, nonatomic) NSDictionary *stockPromotion; // @synthesize stockPromotion=_stockPromotion;
@property(retain, nonatomic) NSString *inStock; // @synthesize inStock=_inStock;
@property(retain, nonatomic) NSString *daySold; // @synthesize daySold=_daySold;
@property(nonatomic) _Bool didClicked; // @synthesize didClicked=_didClicked;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(retain, nonatomic) NSString *recommendLabel; // @synthesize recommendLabel=_recommendLabel;
@property(retain, nonatomic) NSString *collect; // @synthesize collect=_collect;
@property(retain, nonatomic) NSString *recommendGuy; // @synthesize recommendGuy=_recommendGuy;
@property(retain, nonatomic) NSString *assess; // @synthesize assess=_assess;
@property(retain, nonatomic) NSString *realSales; // @synthesize realSales=_realSales;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(retain, nonatomic) NSString *ratesum; // @synthesize ratesum=_ratesum;
@property(retain, nonatomic, getter=theNewDsr) NSString *newDsr; // @synthesize newDsr=_newDsr;
@property(retain, nonatomic) NSString *o2oShopId; // @synthesize o2oShopId=_o2oShopId;
@property(retain, nonatomic) NSDictionary *iconComponentResult; // @synthesize iconComponentResult=_iconComponentResult;
@property(retain, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(retain, nonatomic) NSString *iconList; // @synthesize iconList=_iconList;
@property(retain, nonatomic) NSString *spuId; // @synthesize spuId=_spuId;
@property(retain, nonatomic) NSString *uniqpid; // @synthesize uniqpid=_uniqpid;
@property(retain, nonatomic) NSString *similarURL; // @synthesize similarURL=_similarURL;
@property(retain, nonatomic) NSString *sameCount; // @synthesize sameCount=_sameCount;
@property(retain, nonatomic) NSString *similarCount; // @synthesize similarCount=_similarCount;
@property(retain, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(retain, nonatomic) NSString *pre_title_color; // @synthesize pre_title_color=_pre_title_color;
@property(retain, nonatomic) NSString *pre_title; // @synthesize pre_title=_pre_title;
@property(retain, nonatomic) NSString *banditScore; // @synthesize banditScore=_banditScore;
@property(retain, nonatomic) NSString *mobileDiscount; // @synthesize mobileDiscount=_mobileDiscount;
@property(retain, nonatomic) NSString *coinInfo; // @synthesize coinInfo=_coinInfo;
@property(retain, nonatomic) NSString *pricePerUnit; // @synthesize pricePerUnit=_pricePerUnit;
@property(retain, nonatomic) NSString *rn; // @synthesize rn=_rn;
@property(retain, nonatomic) NSString *fastPostFee; // @synthesize fastPostFee=_fastPostFee;
@property(retain, nonatomic) NSString *clickUrl; // @synthesize clickUrl=_clickUrl;
@property(retain, nonatomic) NSString *userType; // @synthesize userType=_userType;
@property(retain, nonatomic) NSString *sold; // @synthesize sold=_sold;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *item_id; // @synthesize item_id=_item_id;
@property(retain, nonatomic) NSString *priceWithRate; // @synthesize priceWithRate=_priceWithRate;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *uprightImg; // @synthesize uprightImg=_uprightImg;
@property(retain, nonatomic) NSString *pic_path; // @synthesize pic_path=_pic_path;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)proccessIconWithSytleData:(id)arg1;
- (_Bool)checkStockPromotionValid;
- (id)pic_url;

@end
