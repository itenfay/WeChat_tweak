//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveReplayGreateTimeModel : NSObject
{
    NSString *_greateDesc;
    double _greateTime;
    NSString *_thumbUrl;
    unsigned long long _srcType;
}

+ (id)transferToSortedGreateTimeListFromAnchorSpecified:(id)arg1 autoDetection:(id)arg2;
+ (id)createGreateTimeModel:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long srcType; // @synthesize srcType=_srcType;
@property(copy, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(nonatomic) double greateTime; // @synthesize greateTime=_greateTime;
@property(copy, nonatomic) NSString *greateDesc; // @synthesize greateDesc=_greateDesc;
- (_Bool)isEqual:(id)arg1;

@end

