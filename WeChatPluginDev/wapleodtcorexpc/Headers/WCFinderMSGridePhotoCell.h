//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface WCFinderMSGridePhotoCell
{
    NSMutableArray *_photoCells;
}

+ (void)prepareForReuseQueue:(id)arg1;
+ (struct CGSize)calculateDisplaySize:(struct CGSize)arg1 forVM:(id)arg2 cellIdentifier:(id)arg3 showSceneIntroduce:(_Bool)arg4;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *photoCells; // @synthesize photoCells=_photoCells;
- (void)onLongPress:(id)arg1;
- (void)onClickPhoto:(id)arg1;
- (void)onContentVMChanged;
- (void)prepareForReusePhotoViews;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

