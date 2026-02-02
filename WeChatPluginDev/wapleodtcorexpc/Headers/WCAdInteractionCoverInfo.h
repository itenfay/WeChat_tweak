//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdInteractionCoverInfo : NSObject
{
    long long _coverType;
    NSString *_title;
    NSString *_desc;
    unsigned long long _actionStartTime;
    unsigned long long _actionEndTime;
    unsigned long long _coverStartTime;
    unsigned long long _coverEndTime;
    NSString *_themePAGUrl;
    NSString *_themePAGMD5;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *themePAGMD5; // @synthesize themePAGMD5=_themePAGMD5;
@property(retain, nonatomic) NSString *themePAGUrl; // @synthesize themePAGUrl=_themePAGUrl;
@property(nonatomic) unsigned long long coverEndTime; // @synthesize coverEndTime=_coverEndTime;
@property(nonatomic) unsigned long long coverStartTime; // @synthesize coverStartTime=_coverStartTime;
@property(nonatomic) unsigned long long actionEndTime; // @synthesize actionEndTime=_actionEndTime;
@property(nonatomic) unsigned long long actionStartTime; // @synthesize actionStartTime=_actionStartTime;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long coverType; // @synthesize coverType=_coverType;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

