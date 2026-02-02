//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface GameVideoGalleryShareMenuViewController
{
    CDUnknownBlockType _clickItemBlock;
}

- (_Bool)hideOkButton;
- (_Bool)dismissWhenTapOutside;
- (double)contentHeight;
- (void)clickItem:(id)arg1;
- (void)addItemView:(id)arg1 index:(int)arg2 svgName:(id)arg3 title:(id)arg4 subtitle:(id)arg5;
- (void)addTitleView:(id)arg1;
- (void)setupContentView:(id)arg1;
- (id)initWithClickItemBlock:(CDUnknownBlockType)arg1;

@end
