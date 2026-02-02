//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAPhoneNumberAuthorizeSheetInfo;
@protocol IWAPhoneNumberAuthorizePageSheet;

@interface WAPhoneNumberPageSheetViewModel
{
    double _maxListHeight;
}

@property(nonatomic) double maxListHeight; // @synthesize maxListHeight=_maxListHeight;
- (id)init;

// Remaining properties
@property(retain, nonatomic) WAPhoneNumberAuthorizeSheetInfo *infoModel; // @dynamic infoModel;
@property(nonatomic) __weak id <IWAPhoneNumberAuthorizePageSheet> pageSheet; // @dynamic pageSheet;

@end

