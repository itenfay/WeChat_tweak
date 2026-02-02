//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol LiteAppAssetPickerControlCenter <NSObject>
@property(nonatomic) unsigned long long authScene;
@property(nonatomic) _Bool isOpenSendOriginVideo;
@property(copy, nonatomic) CDUnknownBlockType assetSelectedBlock;
@property(nonatomic) _Bool disableVideoSelection;
@property(nonatomic) _Bool videoDirectToEdit;
@property(nonatomic) unsigned long long maxGifDataSize;
@property(retain, nonatomic) NSString *finishWording;
@property(nonatomic) int getPickerScene;
@property(nonatomic) int previewEditScene;
@property(nonatomic) _Bool isOriginalImage;
@property(nonatomic) unsigned long long maxCount;
@property(nonatomic) _Bool canHybridSendAsset;
@property(nonatomic) long long livePhotoMode;
@property(nonatomic) _Bool canSendGif;
@property(nonatomic) _Bool canSendMultiVideo;
@property(nonatomic) _Bool canSendMultiImage;
@property(nonatomic) _Bool forceSendOriginImage;
@property(nonatomic) _Bool canSendOriginImage;
@end

