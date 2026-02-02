//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdTwistInfo : NSObject
{
    _Bool _clockwise;
    _Bool _showSimpleTransition;
    unsigned long long _twistStartTime;
    unsigned long long _twistEndTime;
    unsigned long long _coverStartTime;
    unsigned long long _coverEndTime;
    unsigned long long _twistDegree;
    NSString *_title;
    NSString *_desc;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showSimpleTransition; // @synthesize showSimpleTransition=_showSimpleTransition;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool clockwise; // @synthesize clockwise=_clockwise;
@property(nonatomic) unsigned long long twistDegree; // @synthesize twistDegree=_twistDegree;
@property(nonatomic) unsigned long long coverEndTime; // @synthesize coverEndTime=_coverEndTime;
@property(nonatomic) unsigned long long coverStartTime; // @synthesize coverStartTime=_coverStartTime;
@property(nonatomic) unsigned long long twistEndTime; // @synthesize twistEndTime=_twistEndTime;
@property(nonatomic) unsigned long long twistStartTime; // @synthesize twistStartTime=_twistStartTime;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

