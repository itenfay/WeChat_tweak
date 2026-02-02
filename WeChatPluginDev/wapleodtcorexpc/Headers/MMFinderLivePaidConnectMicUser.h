//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMFinderLivePaidConnectMicUser
{
    _Bool _isOnline;
    _Bool _expandContentIfNeeded;
    unsigned long long _paidAmount;
    NSString *_consultContent;
}

+ (id)connectMicUserFromAudience:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool expandContentIfNeeded; // @synthesize expandContentIfNeeded=_expandContentIfNeeded;
@property(nonatomic) _Bool isOnline; // @synthesize isOnline=_isOnline;
@property(retain, nonatomic) NSString *consultContent; // @synthesize consultContent=_consultContent;
@property(nonatomic) unsigned long long paidAmount; // @synthesize paidAmount=_paidAmount;
- (_Bool)alreadyTimeout;
- (void)updateLocalCloseState:(unsigned long long)arg1;
- (void)updateConnectWaiting:(_Bool)arg1;
- (void)updateConnecting:(_Bool)arg1;
- (void)updateSDKUserId:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

