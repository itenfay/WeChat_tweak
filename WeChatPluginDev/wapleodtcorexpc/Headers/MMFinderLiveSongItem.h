//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MMFinderLiveSongItem : NSObject
{
    unsigned int _requestMemberCnt;
    unsigned int _auditStatus;
    NSString *_name;
    unsigned long long _playState;
    unsigned long long _heartValue;
    NSArray *_requestMemberNames;
    unsigned long long _originalOrder;
    NSString *_localWarningTips;
}

+ (id)songWithSongInfo:(id)arg1 singingSongName:(id)arg2;
+ (id)songWithName:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int auditStatus; // @synthesize auditStatus=_auditStatus;
@property(retain, nonatomic) NSString *localWarningTips; // @synthesize localWarningTips=_localWarningTips;
@property(nonatomic) unsigned long long originalOrder; // @synthesize originalOrder=_originalOrder;
@property(nonatomic) unsigned int requestMemberCnt; // @synthesize requestMemberCnt=_requestMemberCnt;
@property(retain, nonatomic) NSArray *requestMemberNames; // @synthesize requestMemberNames=_requestMemberNames;
@property(nonatomic) unsigned long long heartValue; // @synthesize heartValue=_heartValue;
@property(nonatomic) unsigned long long playState; // @synthesize playState=_playState;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
@property(readonly, nonatomic) _Bool isAuditFail;
@property(readonly, nonatomic) _Bool isAuditing;
@property(readonly, nonatomic) NSString *serverWarningTips;
- (void)copyValueFromSong:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

