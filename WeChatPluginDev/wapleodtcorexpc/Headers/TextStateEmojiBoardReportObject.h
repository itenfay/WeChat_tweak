//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TextStateEmojiBoardReportObject : NSObject
{
    _Bool _isRecentUsedSectionValid;
    unsigned long long _showTimeStamp;
    unsigned long long _hideTimeStamp;
    NSString *_publishId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRecentUsedSectionValid; // @synthesize isRecentUsedSectionValid=_isRecentUsedSectionValid;
@property(retain, nonatomic) NSString *publishId; // @synthesize publishId=_publishId;
@property(nonatomic) unsigned long long hideTimeStamp; // @synthesize hideTimeStamp=_hideTimeStamp;
@property(nonatomic) unsigned long long showTimeStamp; // @synthesize showTimeStamp=_showTimeStamp;
- (void)tapEmojiIcon:(id)arg1 groupDescription:(id)arg2;
- (void)hideEmojiBoard;
- (void)showEmojiBoard;

@end

