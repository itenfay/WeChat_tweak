//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveBattleSettingInfo, NSArray;

@interface MMFinderLiveFeedTransferData : NSObject
{
    FinderLiveBattleSettingInfo *_battleSettings;
    NSArray *_comments;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) FinderLiveBattleSettingInfo *battleSettings; // @synthesize battleSettings=_battleSettings;
- (id)useComments;

@end

