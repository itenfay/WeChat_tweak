//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface TemplateReaderMessageFolderViewModel
{
    unsigned long long _status;
    NSMutableArray *_viewModelList;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *viewModelList; // @synthesize viewModelList=_viewModelList;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void)resetLayoutCache;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (_Bool)isCollapsed;
- (_Bool)isExpanded;
- (double)animationDuration;
- (double)collapsedVertialSpacing;
- (double)expandedVertialSpacing;
- (double)expandedHeight;
- (double)collapsedHeight;
- (double)calcuateHeight;
- (double)calcuateWidth;
- (void)updateViewPositions;
- (unsigned long long)collapsedDisplayViewCount;
- (void)addReaderViewModelList:(id)arg1;
- (void)addReaderViewModel:(id)arg1;
- (id)messageFolder;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)cellViewClassName;

@end

