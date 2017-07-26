//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface WopcCacheQueue : NSObject
{
    long long _size;
    NSMutableArray *_queue;
    unsigned long long _head;
    unsigned long long _tail;
}

+ (id)queueWithCapacity:(long long)arg1;
@property(nonatomic) unsigned long long tail; // @synthesize tail=_tail;
@property(nonatomic) unsigned long long head; // @synthesize head=_head;
@property(retain, nonatomic) NSMutableArray *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) long long size; // @synthesize size=_size;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long count;
- (void)removeAtIndex:(unsigned long long)arg1;
- (id)dataAtIndex:(unsigned long long)arg1;
- (void)put:(id)arg1;
- (id)initWithCapacity:(long long)arg1;
- (id)init;

@end
