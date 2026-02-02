//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol FlutterBinaryMessenger;

@interface TingMusicBottomSheetUtils : NSObject
{
    NSObject<FlutterBinaryMessenger> *_binaryMessenger;
    NSString *_messageChannelSuffix;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *messageChannelSuffix; // @synthesize messageChannelSuffix=_messageChannelSuffix;
@property(retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger; // @synthesize binaryMessenger=_binaryMessenger;
- (void)deleteAlbumWithCompletion:(CDUnknownBlockType)arg1;
- (void)editAlbumWithCompletion:(CDUnknownBlockType)arg1;
- (void)complaintWithCompletion:(CDUnknownBlockType)arg1;
- (void)dislikeWithCompletion:(CDUnknownBlockType)arg1;
- (void)minimizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)showAlbumPageFromMusicItemWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (id)initWithBinaryMessenger:(id)arg1;

@end

