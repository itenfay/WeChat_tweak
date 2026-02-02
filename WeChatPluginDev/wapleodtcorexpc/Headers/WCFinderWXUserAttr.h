//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderWXUserAttr : NSObject
{
    _Bool _showEnterTips;
    NSString *_enterTips;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *enterTips; // @synthesize enterTips=_enterTips;
@property(nonatomic, getter=shouldShowEnterTips) _Bool showEnterTips; // @synthesize showEnterTips=_showEnterTips;
- (id)description;
- (id)initWithAttr:(id)arg1;

@end

