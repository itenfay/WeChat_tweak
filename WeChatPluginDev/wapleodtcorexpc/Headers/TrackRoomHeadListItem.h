//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMHeadImageView, NSString, UIImageView, UITapGestureRecognizer;
@protocol TrackRoomHeadListItemDelegate;

@interface TrackRoomHeadListItem
{
    _Bool _selected;
    id <TrackRoomHeadListItemDelegate> _delegate;
    UIImageView *_normalBgImageView;
    UIImageView *_selectedBgImageView;
    MMHeadImageView *_headImageView;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TrackRoomHeadListItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void)onSingleTap:(id)arg1;
@property(retain, nonatomic) NSString *username;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

