//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary;
@protocol HeadImgDownloaderDelegate;

@interface HeadImgBaseDownloader
{
    NSMutableArray *m_aryRequest;
    NSMutableDictionary *m_mapLastGetTime;
    _Bool m_bCommiting;
    NSMutableArray *m_aryGetting;
    unsigned int m_uiDownloadCount;
    _Bool m_bGetting;
    id <HeadImgDownloaderDelegate> m_downloaderDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <HeadImgDownloaderDelegate> downloaderDelegate; // @synthesize downloaderDelegate=m_downloaderDelegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)checkIfForbidden:(id)arg1;
- (void)commitRequestQueue;
- (void)removeUsrFromLastFailureList:(id)arg1;
- (void)addToLastMap:(id)arg1;
- (_Bool)cancelRequest:(id)arg1;
- (void)createNetworkRequest:(id)arg1;
- (void)sendRequest;
- (_Bool)addRequest:(id)arg1 url:(id)arg2 forCategory:(unsigned char)arg3;
- (void)dealloc;
- (id)init;

@end

