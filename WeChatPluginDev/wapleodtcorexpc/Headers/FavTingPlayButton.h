//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol FavTingPlayButtonDelegate;

@interface FavTingPlayButton : NSObject
{
    id <FavTingPlayButtonDelegate> _favTingBtnDelegate;
}

@property(nonatomic) __weak id <FavTingPlayButtonDelegate> favTingBtnDelegate; // @synthesize favTingBtnDelegate=_favTingBtnDelegate;
- (id)categoryItem;

@end

