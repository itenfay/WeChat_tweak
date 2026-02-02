//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol MMBGMSelectedMusicDataProtocol;

@interface MMBGMPanelPublishContext : NSObject
{
    int _finderCommentScene;
    NSString *_sourceFeedId;
    unsigned long long _postEnterScene;
    NSString *_editId;
    NSString *_templateId;
    unsigned long long _currentBgmPanelTabType;
    id <MMBGMSelectedMusicDataProtocol> _currentSelectedMusic;
}

- (void).cxx_destruct;
@property(nonatomic) int finderCommentScene; // @synthesize finderCommentScene=_finderCommentScene;
@property(retain, nonatomic) id <MMBGMSelectedMusicDataProtocol> currentSelectedMusic; // @synthesize currentSelectedMusic=_currentSelectedMusic;
@property(nonatomic) unsigned long long currentBgmPanelTabType; // @synthesize currentBgmPanelTabType=_currentBgmPanelTabType;
@property(copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(copy, nonatomic) NSString *editId; // @synthesize editId=_editId;
@property(nonatomic) unsigned long long postEnterScene; // @synthesize postEnterScene=_postEnterScene;
@property(copy, nonatomic) NSString *sourceFeedId; // @synthesize sourceFeedId=_sourceFeedId;
- (id)genFixedDataReportDict;
- (id)init;

@end

