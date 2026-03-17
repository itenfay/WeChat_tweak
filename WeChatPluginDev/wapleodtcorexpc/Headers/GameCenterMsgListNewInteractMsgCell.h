//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCInteractView;

@interface GameCenterMsgListNewInteractMsgCell : NSObject
{
    GCInteractView *_interactView;
}

@property(retain, nonatomic) GCInteractView *interactView; // @synthesize interactView=_interactView;
- (void)updateWithCellData:(id)arg1;

@end

