//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GCOpenReportParam, NSString;

@interface GameChatVcOpenConfig : NSObject
{
    _Bool _isInTab;
    unsigned int _sourceScene;
    GCOpenReportParam *_reportParam;
    double _tabbarHeight;
    unsigned long long _selectTab;
    NSString *_focusMsgId;
}

+ (id)gameChatVcOpenConfigWithIsInTab:(_Bool)arg1 tabbarHeight:(double)arg2 reportParam:(id)arg3 sourceScene:(unsigned int)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *focusMsgId; // @synthesize focusMsgId=_focusMsgId;
@property(nonatomic) unsigned long long selectTab; // @synthesize selectTab=_selectTab;
@property(nonatomic) double tabbarHeight; // @synthesize tabbarHeight=_tabbarHeight;
@property(nonatomic) unsigned int sourceScene; // @synthesize sourceScene=_sourceScene;
@property(nonatomic) _Bool isInTab; // @synthesize isInTab=_isInTab;
@property(retain, nonatomic) GCOpenReportParam *reportParam; // @synthesize reportParam=_reportParam;

@end

