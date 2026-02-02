//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCTagLineView;

@interface GameChatGroupCell : NSObject
{
    GCTagLineView *_tagLineView;
}

@property(retain, nonatomic) GCTagLineView *tagLineView; // @synthesize tagLineView=_tagLineView;
- (id)verticalAlignArrary;
- (_Bool)supportStickTop;
- (void)configureWithCellModel:(id)arg1;
- (double)maxRight;
- (id)initWithFrame:(struct CGRect)arg1;

@end

