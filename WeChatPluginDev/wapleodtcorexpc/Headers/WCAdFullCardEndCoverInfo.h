//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdFullCardEndCoverInfo : NSObject
{
    NSString *_title;
    NSString *_titleImageUrl;
    NSString *_desc;
    NSString *_actionTitle;
    NSString *_ambientImageUrl;
    unsigned long long _endCoverEndTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long endCoverEndTime; // @synthesize endCoverEndTime=_endCoverEndTime;
@property(retain, nonatomic) NSString *ambientImageUrl; // @synthesize ambientImageUrl=_ambientImageUrl;
@property(retain, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *titleImageUrl; // @synthesize titleImageUrl=_titleImageUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

