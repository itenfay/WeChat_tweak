//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol FavTingPlayButtonDelegate;

@interface FavTingPlayButton
{
    id <FavTingPlayButtonDelegate> _favTingBtnDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FavTingPlayButtonDelegate> favTingBtnDelegate; // @synthesize favTingBtnDelegate=_favTingBtnDelegate;
- (id)categoryItem;

@end

