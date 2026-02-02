//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface FavFileDetailViewController
{
    unsigned int m_favId;
    _Bool _needReload;
}

@property(nonatomic) _Bool needReload; // @synthesize needReload=_needReload;
- (void)setDisableAutoDownload;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithFavDataWrap:(id)arg1;
- (id)initWithFavItem:(id)arg1 LogicController:(id)arg2;
- (id)initWithFavItem:(id)arg1;

@end

