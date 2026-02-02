//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface WCAdInteractionInfo : NSObject
{
    NSArray *_eventInfos;
    NSArray *_resourceInfos;
    NSArray *_actionInfos;
    NSArray *_determinationInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *determinationInfos; // @synthesize determinationInfos=_determinationInfos;
@property(retain, nonatomic) NSArray *actionInfos; // @synthesize actionInfos=_actionInfos;
@property(retain, nonatomic) NSArray *resourceInfos; // @synthesize resourceInfos=_resourceInfos;
@property(retain, nonatomic) NSArray *eventInfos; // @synthesize eventInfos=_eventInfos;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

