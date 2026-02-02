//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderMusicReportInfo, MMBGMSelectedMusicResult, NSString;

@interface MJPublisherPostInfo : NSObject
{
    _Bool _isRealShootContent;
    MMBGMSelectedMusicResult *_appliedMusicInfo;
    NSString *_movieTitle;
    FinderMusicReportInfo *_shootMusicReportInfo;
    FinderMusicReportInfo *_editMusicReportInfo;
    NSString *_photoToVideoGPSAssetId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRealShootContent; // @synthesize isRealShootContent=_isRealShootContent;
@property(copy, nonatomic) NSString *photoToVideoGPSAssetId; // @synthesize photoToVideoGPSAssetId=_photoToVideoGPSAssetId;
@property(retain, nonatomic) FinderMusicReportInfo *editMusicReportInfo; // @synthesize editMusicReportInfo=_editMusicReportInfo;
@property(retain, nonatomic) FinderMusicReportInfo *shootMusicReportInfo; // @synthesize shootMusicReportInfo=_shootMusicReportInfo;
@property(retain, nonatomic) NSString *movieTitle; // @synthesize movieTitle=_movieTitle;
@property(retain, nonatomic) MMBGMSelectedMusicResult *appliedMusicInfo; // @synthesize appliedMusicInfo=_appliedMusicInfo;

@end

