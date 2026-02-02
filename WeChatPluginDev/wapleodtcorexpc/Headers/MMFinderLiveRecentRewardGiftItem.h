//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveGift;

@interface MMFinderLiveRecentRewardGiftItem : NSObject
{
    unsigned int _productCount;
    FinderLiveGift *_gift;
}

+ (id)batchConvert:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int productCount; // @synthesize productCount=_productCount;
@property(retain, nonatomic) FinderLiveGift *gift; // @synthesize gift=_gift;
@property(readonly, nonatomic) double lengthAtLast;
@property(readonly, nonatomic) double length;
- (id)initWithFinderLiveGift:(id)arg1 count:(unsigned int)arg2;

@end

