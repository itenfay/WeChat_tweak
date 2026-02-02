//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCContentItemCardViewModel : NSObject
{
    _Bool _showPicIcon;
    _Bool _showSightPlayIcon;
    unsigned long long _type;
    unsigned long long _layoutStyle;
    double _fittingHeight;
    NSString *_avatar;
    NSString *_thumbUrl;
    NSString *_duration;
    NSString *_nickName;
    NSString *_desc;
    NSString *_titleText;
    NSString *_usrName;
}

+ (double)calCoverFittingHeightWithThumbWidth:(unsigned int)arg1 height:(unsigned int)arg2;
+ (id)fromContentItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *usrName; // @synthesize usrName=_usrName;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) _Bool showSightPlayIcon; // @synthesize showSightPlayIcon=_showSightPlayIcon;
@property(nonatomic) _Bool showPicIcon; // @synthesize showPicIcon=_showPicIcon;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(nonatomic) double fittingHeight; // @synthesize fittingHeight=_fittingHeight;
@property(nonatomic) unsigned long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)debugDescription;

@end

