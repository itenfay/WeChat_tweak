//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIImage, WCFinderContact;

@interface WCFinderContactCache : NSObject
{
    _Bool _hasSetLocation;
    _Bool _hasSetSex;
    UIImage *_creatingHeadImage;
    WCFinderContact *_contact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(nonatomic) _Bool hasSetSex; // @synthesize hasSetSex=_hasSetSex;
@property(nonatomic) _Bool hasSetLocation; // @synthesize hasSetLocation=_hasSetLocation;
@property(retain, nonatomic) UIImage *creatingHeadImage; // @synthesize creatingHeadImage=_creatingHeadImage;
- (int)sex;
- (_Bool)isShowSex;
- (id)locations;
- (_Bool)isShowLocation;
- (id)creatingSignature;
- (id)creatingNickName;
- (void)setShowSex:(long long)arg1;
- (void)setNotShowSex;
- (void)setShowLocationWithCountry:(id)arg1 province:(id)arg2 city:(id)arg3;
- (void)setNotShowLocation;
- (void)setCreatingSignature:(id)arg1;
- (void)setCreatingNickName:(id)arg1;
- (id)init;

@end

