//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class RingToneDetail, StatusFooterJumpRingtone, UIViewController;

@interface TextState3rdPartyRingHandler
{
    StatusFooterJumpRingtone *_ring;
    RingToneDetail *_ringDetail;
    UIViewController *_vc;
}

+ (id)genRingBackDetailSubRequestPB:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
@property(retain, nonatomic) RingToneDetail *ringDetail; // @synthesize ringDetail=_ringDetail;
@property(retain, nonatomic) StatusFooterJumpRingtone *ring; // @synthesize ring=_ring;
- (_Bool)doSourceActionWithViewController:(id)arg1 scene:(unsigned int)arg2;
- (void)jumpToRingTonePickerViewController:(id)arg1;
- (id)mediaDescription;
- (_Bool)preferCustomView;
- (unsigned int)type;
- (id)initWithBuffer:(id)arg1 keyBuffer:(id)arg2;

@end

