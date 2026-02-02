//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, NSString, UIImage, WCDataItem;
@protocol TLProfileMediaViewProvider;

@interface TLProfileModel : NSObject
{
    long long _scene;
    CContact *_contact;
    WCDataItem *_dataItem;
    id <TLProfileMediaViewProvider> _thirdPartyHandler;
    UIImage *_normalImage;
}

- (void).cxx_destruct;
@property(copy, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
@property(retain, nonatomic) id <TLProfileMediaViewProvider> thirdPartyHandler; // @synthesize thirdPartyHandler=_thirdPartyHandler;
@property(readonly, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(readonly, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) long long scene; // @synthesize scene=_scene;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool hidesBlurForShortHeightMedias;
- (_Bool)isInvalid;
- (id)titleFor3rdParty;
- (id)descriptionFor3rdParty;
- (id)headImageViewFor3rdParty;
- (id)mediaCoverView;
- (id)mediaView;
@property(readonly, nonatomic) NSString *finderNonceID;
@property(readonly, nonatomic) NSString *finderObjectID;
- (void)requestDataIfNeeded;
- (void)reloadData;
- (id)initWithScene:(long long)arg1 contact:(id)arg2;

@end

