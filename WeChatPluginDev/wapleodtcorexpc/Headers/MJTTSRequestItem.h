//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, OMJID;

@interface MJTTSRequestItem : NSObject
{
    OMJID *_ttsSegmentID;
    NSString *_text;
    NSString *_roleID;
    NSString *_roleName;
    NSString *_audioFilePath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *audioFilePath; // @synthesize audioFilePath=_audioFilePath;
@property(readonly, nonatomic) NSString *roleName; // @synthesize roleName=_roleName;
@property(readonly, nonatomic) NSString *roleID; // @synthesize roleID=_roleID;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) OMJID *ttsSegmentID; // @synthesize ttsSegmentID=_ttsSegmentID;
- (id)initWithTTSSegmentID:(id)arg1 text:(id)arg2 roleID:(id)arg3 roleName:(id)arg4 audioFilePath:(id)arg5;

@end

