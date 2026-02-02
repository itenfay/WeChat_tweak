//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCMusicSearchReporter : NSObject
{
    _Bool _hasReportTextChanged;
    NSString *_sessionId;
    NSString *_chatUsername;
    unsigned long long _searchEnterScene;
    unsigned long long _exitType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasReportTextChanged; // @synthesize hasReportTextChanged=_hasReportTextChanged;
@property(nonatomic) unsigned long long exitType; // @synthesize exitType=_exitType;
@property(nonatomic) unsigned long long searchEnterScene; // @synthesize searchEnterScene=_searchEnterScene;
@property(copy, nonatomic) NSString *chatUsername; // @synthesize chatUsername=_chatUsername;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void)appendContent:(id)arg1 forReportString:(id)arg2;
- (void)appendNumber:(id)arg1 forReportString:(id)arg2;
- (id)stringByRepacedInvalidCharacters:(id)arg1;
- (void)reportWithSessionId:(id)arg1 action:(unsigned long long)arg2 enterScene:(unsigned long long)arg3 searchQuery:(id)arg4 clickQuery:(id)arg5 listenHistory:(id)arg6 songName:(id)arg7 singer:(id)arg8 audioType:(int)arg9 appId:(id)arg10 chatUsername:(id)arg11;
- (void)reportTextChanged;
- (id)init;
- (void)reportDoSearchWithQuery:(id)arg1 smartBoxHint:(id)arg2 enterScene:(unsigned long long)arg3;
- (void)reportWithAction:(unsigned long long)arg1;
- (void)reportSendWithMusicInfo:(id)arg1;
- (void)reportClickToListenWithMusicInfo:(id)arg1;
- (void)reportHistoryDidLoad:(id)arg1;

@end

