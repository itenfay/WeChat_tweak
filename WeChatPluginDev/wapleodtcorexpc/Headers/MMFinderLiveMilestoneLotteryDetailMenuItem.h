//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveMilestoneLotteryMetaInfo_MetaInfo, NSString;

@interface MMFinderLiveMilestoneLotteryDetailMenuItem : NSObject
{
    FinderLiveMilestoneLotteryMetaInfo_MetaInfo *_metaInfo;
    unsigned long long _style;
    NSString *_time;
    NSString *_title;
    NSString *_subtitle;
    CDUnknownBlockType _selectCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType selectCallback; // @synthesize selectCallback=_selectCallback;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) FinderLiveMilestoneLotteryMetaInfo_MetaInfo *metaInfo; // @synthesize metaInfo=_metaInfo;

@end

