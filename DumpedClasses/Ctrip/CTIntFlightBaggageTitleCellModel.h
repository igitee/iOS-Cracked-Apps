//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CTIntFlightBaggageTitleCellModel : NSObject
{
    _Bool _open;
    _Bool _disableSwitch;
    _Bool _detailIsOpen;
    NSString *_imgUrl;
    NSString *_displayInfo;
    NSString *_openHint;
    NSString *_closeHint;
    double _weight;
    double _price;
    NSString *_descKey;
}

@property(nonatomic) _Bool detailIsOpen; // @synthesize detailIsOpen=_detailIsOpen;
@property(retain, nonatomic) NSString *descKey; // @synthesize descKey=_descKey;
@property(nonatomic) double price; // @synthesize price=_price;
@property(nonatomic) double weight; // @synthesize weight=_weight;
@property(retain, nonatomic) NSString *closeHint; // @synthesize closeHint=_closeHint;
@property(retain, nonatomic) NSString *openHint; // @synthesize openHint=_openHint;
@property(retain, nonatomic) NSString *displayInfo; // @synthesize displayInfo=_displayInfo;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(nonatomic) _Bool disableSwitch; // @synthesize disableSwitch=_disableSwitch;
@property(getter=isOpen) _Bool open; // @synthesize open=_open;
- (void).cxx_destruct;
- (id)init;

@end

