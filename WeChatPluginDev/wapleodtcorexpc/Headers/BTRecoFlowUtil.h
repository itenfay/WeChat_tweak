//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BTRecoFlowUtil : NSObject
{
}

+ (id)cellReuseIdentifierForFeedStyleFlag:(int)arg1 itemShowType:(unsigned long long)arg2 hasDigest:(_Bool)arg3;
+ (_Bool)isItemShowTypeValidValue:(unsigned long long)arg1;
+ (_Bool)isRecoFlowFuncSectionWithType:(unsigned long long)arg1;
+ (_Bool)shouldCellShowBottomSeperateLineWithSectionData:(id)arg1 andNextSectionData:(id)arg2 isLastSectionData:(_Bool)arg3;
+ (id)genOpenParamsWithIndexPath:(id)arg1 sectionData:(id)arg2;
+ (id)tableView:(id)arg1 cellForIndexPath:(id)arg2 sectionData:(id)arg3 shouldShowBottomSeperateLine:(_Bool)arg4;
+ (_Bool)isAllRecoFlowCardsUnsupportedWithCardMsgArr:(id)arg1;
+ (_Bool)isSupportedRecoFlowStyleWithCardMsg:(id)arg1;
+ (void)reigisterTableViewCells:(id)arg1;
+ (id)buildXButton;
+ (id)buildWebImageView;

@end

