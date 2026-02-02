//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIView;

@interface LocationThumbTask
{
    double _extraHeight;
    NSString *_initialChatname;
    NSString *_chatname;
    unsigned int _msgLocalID;
    double _latitude;
    double _longitude;
    struct CGSize _thumbSize;
    struct CGPoint _mapPinOffset;
    double _mapScale;
    _Bool _isSender;
    _Bool _disableMask;
    UIView *_extraView;
    _Bool _isInDarkMode;
    NSString *_buildingId;
    NSString *_floorName;
    NSString *_tmpThumbID;
}

+ (id)getThumbIDWithChatName:(id)arg1 MsgLocalID:(unsigned int)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tmpThumbID; // @synthesize tmpThumbID=_tmpThumbID;
@property(retain, nonatomic) UIView *extraView; // @synthesize extraView=_extraView;
@property(copy, nonatomic) NSString *floorName; // @synthesize floorName=_floorName;
@property(copy, nonatomic) NSString *buildingId; // @synthesize buildingId=_buildingId;
@property(nonatomic) _Bool isInDarkMode; // @synthesize isInDarkMode=_isInDarkMode;
@property(nonatomic) _Bool disableMask; // @synthesize disableMask=_disableMask;
@property(nonatomic) _Bool isSender; // @synthesize isSender=_isSender;
@property(nonatomic) struct CGPoint mapPinOffset; // @synthesize mapPinOffset=_mapPinOffset;
@property(nonatomic) struct CGSize thumbSize; // @synthesize thumbSize=_thumbSize;
@property(nonatomic) double mapScale; // @synthesize mapScale=_mapScale;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) unsigned int msgLocalID; // @synthesize msgLocalID=_msgLocalID;
@property(copy, nonatomic) NSString *chatname; // @synthesize chatname=_chatname;
@property(copy, nonatomic) NSString *initialChatname; // @synthesize initialChatname=_initialChatname;
@property(nonatomic) double extraHeight; // @synthesize extraHeight=_extraHeight;
- (id)getThumbID;
- (id)init;

@end

