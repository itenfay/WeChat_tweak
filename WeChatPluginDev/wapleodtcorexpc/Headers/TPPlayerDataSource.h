//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TPUrlDataSource;
@protocol ITPMediaAsset;

@interface TPPlayerDataSource : NSObject
{
    TPUrlDataSource *_urlDataSource;
    id <ITPMediaAsset> _mediaAsset;
}

+ (id)dataSourceWithMediaAsset:(id)arg1;
+ (id)dataSourceWithUrlDataSource:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <ITPMediaAsset> mediaAsset; // @synthesize mediaAsset=_mediaAsset;
@property(retain, nonatomic) TPUrlDataSource *urlDataSource; // @synthesize urlDataSource=_urlDataSource;
- (_Bool)isValid;

@end

