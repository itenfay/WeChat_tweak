//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WCFinderClubSystemMessage : NSObject
{
    NSMutableDictionary *_jumpInfoDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *jumpInfoDict; // @synthesize jumpInfoDict=_jumpInfoDict;
- (id)jumpInfoWithLinkScene:(id)arg1;
- (void)safeSetJumpInfoStr:(id)arg1 linkScene:(id)arg2;

@end

