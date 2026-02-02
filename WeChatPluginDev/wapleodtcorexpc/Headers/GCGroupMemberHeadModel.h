//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, Slot, UIColor;

@interface GCGroupMemberHeadModel
{
    _Bool _isOnline;
    _Bool _needPlayAnimation;
    _Bool _needFold;
    int _numCircles;
    NSString *_userName;
    NSString *_headUrl;
    NSString *_useAsText;
    unsigned long long _cellType;
    NSString *_stateIconUrl;
    NSString *_statusDesc;
    unsigned long long _status;
    UIColor *_statusIconBgColor;
    Slot *_slotInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) Slot *slotInfo; // @synthesize slotInfo=_slotInfo;
@property(nonatomic) int numCircles; // @synthesize numCircles=_numCircles;
@property(nonatomic) _Bool needFold; // @synthesize needFold=_needFold;
@property(nonatomic) _Bool needPlayAnimation; // @synthesize needPlayAnimation=_needPlayAnimation;
@property(retain, nonatomic) UIColor *statusIconBgColor; // @synthesize statusIconBgColor=_statusIconBgColor;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *statusDesc; // @synthesize statusDesc=_statusDesc;
@property(retain, nonatomic) NSString *stateIconUrl; // @synthesize stateIconUrl=_stateIconUrl;
@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
@property(nonatomic) _Bool isOnline; // @synthesize isOnline=_isOnline;
@property(retain, nonatomic) NSString *useAsText; // @synthesize useAsText=_useAsText;
@property(retain, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (Class)bindCellClass;

@end

