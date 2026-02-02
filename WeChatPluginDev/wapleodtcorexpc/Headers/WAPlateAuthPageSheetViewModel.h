//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAPlateAuthorizePageSheet, WAPlateAuthorizeSheetInfo;

@interface WAPlateAuthPageSheetViewModel
{
    CDUnknownBlockType _scrollToPlateAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType scrollToPlateAction; // @synthesize scrollToPlateAction=_scrollToPlateAction;

// Remaining properties
@property(retain, nonatomic) WAPlateAuthorizeSheetInfo *infoModel; // @dynamic infoModel;
@property(nonatomic) __weak WAPlateAuthorizePageSheet *pageSheet; // @dynamic pageSheet;

@end

