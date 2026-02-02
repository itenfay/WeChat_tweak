//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface WCAdSliderCardReportModel
{
    int _sliderCardStyle;
    unsigned int _slideJumpCount;
    NSMutableArray *_reportItemList;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int slideJumpCount; // @synthesize slideJumpCount=_slideJumpCount;
@property(nonatomic) int sliderCardStyle; // @synthesize sliderCardStyle=_sliderCardStyle;
@property(retain, nonatomic) NSMutableArray *reportItemList; // @synthesize reportItemList=_reportItemList;

@end

