//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, VoipMonoMsg;

@interface VoIPInvitationInfo : NSObject
{
    _Bool _isVideo;
    VoipMonoMsg *_monoMsg;
    CContact *_contact;
}

+ (id)infoWithMonoMsg:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) VoipMonoMsg *monoMsg; // @synthesize monoMsg=_monoMsg;
- (_Bool)isCancelletionWithMonoMsg:(id)arg1;
- (id)newInfoWithIsVideo:(_Bool)arg1;
- (id)initWithMonoMsg:(id)arg1 contact:(id)arg2 isVideo:(_Bool)arg3;

@end

