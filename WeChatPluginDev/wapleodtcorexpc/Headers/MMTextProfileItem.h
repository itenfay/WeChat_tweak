//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMTextProfileItem : NSObject
{
    int _errorW;
    int _errorH;
    int _ratio;
    float _statisticsRatio;
    float _pointSize;
    int _type;
    unsigned long long _sid;
    struct MMTextLayoutParam _param;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) struct MMTextLayoutParam param; // @synthesize param=_param;
@property(nonatomic) float pointSize; // @synthesize pointSize=_pointSize;
@property(nonatomic) float statisticsRatio; // @synthesize statisticsRatio=_statisticsRatio;
@property(nonatomic) int ratio; // @synthesize ratio=_ratio;
@property(nonatomic) int errorH; // @synthesize errorH=_errorH;
@property(nonatomic) int errorW; // @synthesize errorW=_errorW;
@property(nonatomic) unsigned long long sid; // @synthesize sid=_sid;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

